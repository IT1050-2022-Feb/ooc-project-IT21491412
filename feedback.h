class Feedback{
private:
            int feedbackID;
            string fstatus;
Public:
          Feedback ();
          void setFeedback(int feID, string fstatus);
          void displayFeedbackDetails();
           ~Feedback ();
};