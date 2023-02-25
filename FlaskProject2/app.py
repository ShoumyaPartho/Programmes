import os

from flask import Flask, render_template, request
from flask_dropzone import Dropzone
basedir = os.path.abspath(os.path.dirname(__file__))

app = Flask(__name__)
app.config.update(
    UPLOADED_PATH= os.path.join(basedir,'uploads'),
    DROPZONE_MAX_FILE_SIZE = 1024,
    DROPZONE_TIMEOUT = 5*60*1000)
ALLOWED_EXTENSIONS = {'png', 'jpg', 'jpeg'}

def allowed_file(filename):
    return '.' in filename and \
           filename.rsplit('.', 1)[1].lower() in ALLOWED_EXTENSIONS

dropzone = Dropzone(app)
@app.route('/',methods=['POST','GET'])
def upload():
    if request.method == 'POST':
        f = request.files.get('file')
        if f.filename == '':
            flash('No selected file')
            return redirect(request.url)
        if f and allowed_file(f.filename):
            f.save(os.path.join(app.config['UPLOADED_PATH'],f.filename))
        else:
            flash('No valid file')
    return render_template('index.html')

if __name__ == '__main__':
    app.run(debug=True)