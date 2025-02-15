// numbr of students unable to eat lunch

/*
    solution using queue

    class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        queue<int> st;
        for (int i = 0; i<students.size(); i++) {
            st.push(students[i]);
        }

        queue<int> sand;
        for (int i = 0; i<sandwiches.size(); i++) {
            sand.push(sandwiches[i]);
        }

        int count = 0;
        while (count <= st.size() && st.size() > 0) {
            if (st.front() == sand.front()) {
                st.pop();
                sand.pop();
                count = 0;
            }
            else {
                st.push(st.front());
                st.pop();
                count++;
            }
        }

        return sand.size();

    }
};
*/


/*
    solution using shorting

    
*/