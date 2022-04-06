class Solution {
public:
    int mincostTickets(vector<int>& days, vector<int>& costs) {
        const int INF = 1e9 + 7;

        vector<int> minDaysCost(days.size(), INF);
        int minTicketCost1, minTicketCost7, minTicketCost30, prevMinCost = 0;

        for (int i = 0; i < days.size(); i++) {

            minTicketCost1 = prevMinCost + costs[0];

            minTicketCost7 = prevMinCost + costs[1];

            for (int j = i + 1; j < days.size(); j++) {

                if (days[j] > days[i] + 6)
                    break;

                minDaysCost[j] = min(minDayCost[j], prevMinCost + costs[1]);
            }

            minTicketCost30 = prevMinCost + costs[2];

            for (int j = i + 1; j < days.size(); j++) {

                if (days[j] > days[i] + 29)
                    break;

                minDaysCost[j] = min(minDayCost[j], prevMinCost + costs[2]);
            }

            prevMinCost = min(minTicketCost1, min(minTicketCost7, minTicketCost30));

            if (minDaysCost[i] < prevMinCost)
                prevMinCost = minDaysCost[i];

            else
                minDaysCost[i] = prevMinCost;
        }

        return prevMinCost;
    }
};