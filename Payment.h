class Payment
{
  private:
    char payID[10];
    char Payment_method[25];
    double amount;

  public:
    Payment();
    Payment(const char payID[] , const char 
    Payment_method[]  ,    double amount);
    void displayPayment();
    ~Payment();

     
      
};
