import mysql.connector
import json, os

def jsontomysql(request):
    mydb = mysql.connector.connect(host="localhost", user="gurdayal-s", password="xmenguru77", database='csappdb')
    mycursor = mydb.cursor()
    mycursor.execute("show tables;")
    myresult = mycursor.fetchall()

    # read file
    f = open(os.path.join(BASE_DIR, 'database.json'))
    data = json.load(f)

    for i in myresult:
        tb = i[0].replace('_','.',1)
        for i in data[0]['model']:
            print(i)

    return render(request, "jsontomysql.html", {"msg": "unknown"})