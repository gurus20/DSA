print("Enter Amount To Be Invested Per Month :")
investment_amount = int(input())
print("Enter No of Years You Want To Invest For :")
years = int(input())
total_earned = 0
inv = 0

for i in range(years):
    investment = investment_amount * 12
    inv = inv + investment
    total_yearly = total_earned + investment
    intrest_earned = total_yearly * 0.065
    total_earned = intrest_earned + total_yearly
    
print("Total Earned in {} years {}".format(years, total_earned))
print("Invested Amount : {}".format(inv))
print("Profit Made : {}".format(total_earned - inv))
