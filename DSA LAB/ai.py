
flag=1
num_app=0
num_ban=0

while(flag!=0):

    var=input('Enter the name of the Fruit(apple/banana): ')
    var=var.lower()

    if(var=='apple'):
        print('Sorted...The fruit is apple')
        num_app = num_app+1
    elif (var == 'banana'):
        print('Sorted...The fruit is banana')
        num_ban = num_ban + 1
    else:
        print('The item sorted to bin....As it is not apple/banana')

    print('Enter 1 to sort again, 0 to exit')
    flag=int(input())

print('Sorted:  Apples= ',num_app,'   bananas= ',num_ban)