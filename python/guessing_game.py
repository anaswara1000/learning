
secret_word="giraffe"
guess=""
guess_count=0
guess_limit=5
out_of_guesses=False

while guess!=secret_word and not(out_of_guesses):
    if guess_count<guess_limit:
        guess=input("enter guess:")
        guess_count+=1
        
        if guess_count==2:
            print("hint1:its an animal")
        if guess_count==4:
            print("hint2:start with g")   
     
  
    else:
        out_of_guesses=True
        
       
if out_of_guesses:
    print("you lost")
else:
    print("you won")
