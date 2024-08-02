def convert_number_to_words(num):
    num_dict={
        
        '0':'zero',
        '1':'one',
        '2':'two',
        '3':'three',
        '4':'four',
        '5':'five',
        '6':'six',
        '7':'seven',
        '8':'eight',
        '9':'nine',
        
    }
    return ' '.join([num_dict [digit] for digit in str(num)])
    
num=6742
print(convert_number_to_words(num))
