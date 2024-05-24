user_prompt = "Enter a todo:"

todos = []

while True:
    todo = input(user_prompt)
    # print(todo.capitalize())
    todos.append(todo)
    print(todos)


#################################################
#32
todos = []

while True:
   user_action = input("type add or show:")

   match user_action:
        case 'add':
            todo = input("enter a todo: ")
            todos.append(todo)
        case 'show':
            print(todos)
        case 'exit':
            break
print("Bye")
####################################################
#34 bonus
meals =['pasta','pizza','salad']

for meal in meals:
    print(meal.capitalize())

###############################################@##
#list indexing system

#43
todos = []

while True:
   user_action = input("type add ,show ,edit or exit:")
   user_action = user_action.strip()
   match user_action:
        case 'add':
            todo = input("enter a todo: ")
            todos.append(todo)
        case 'show' | 'display':
            for item in todos:
                item = item.title()
                print(item)
        case 'edit':
            number=int(input("number of todo to edit:"))
            number=number - 1
            new_todo=input("enter new todo")
            todos[number]=new_todo
            # print(existing_todo)
        case 'exit':
            break

print("Bye")

#########################################################################

#enumerate is a list of tuples
# 61
    case 'add':
            todo = input("enter a todo: ") + "\n"

            file=open('todos.txt','r')
            todos=file.readlines()
            file.close()

            todos.append(todo)

            file=open('todos.txt','w')
            file.writelines(todos)
            file.close()

# ###############################################
##################################
# list comparison is equal to for loop

#list comprehension
# this is the syntax
 new_todos=[item.strip('\n') for item in todos]




























