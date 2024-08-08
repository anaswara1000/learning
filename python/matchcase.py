username=input("enter username:")

match username:
    case "john":
        print("welcome admin")
    case "sim":
        print("welcome user")
    case "sam":
        print("welcome guest")
    case _:
        print("invalid")
