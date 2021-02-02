total_names = int(input())
first_names = input()
second_names = input()
first_names_list = []
second_names_list = []
brokenThrough = False
first_names_replica = first_names.split(" ")
second_names_replica = second_names.split(" ")
for element in first_names_replica:
    first_names_list.append(element.lower())
for element in second_names_replica:
    second_names_list.append(element.lower())

for x in range(0,total_names):
    if first_names_list[x]==second_names_list[x]:
        print("bad")
        brokenThrough = True
        break
    if first_names_list[x] in second_names_list:
        temp_index = second_names_list.index(first_names_list[x])
        if first_names_list[temp_index]!=second_names_list[x]:
            print("bad")
            brokenThrough = True
            break
if brokenThrough == False:
    print("good")
