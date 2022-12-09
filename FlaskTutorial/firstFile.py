from flask import Flask,render_template

app = Flask(__name__)

@app.route("/")
def hello_world():
    return render_template('index.html')

@app.route("/krishna")
def hare_krishna():
    return "<p>Hare Krishna</p>"

app.run(debug=True)