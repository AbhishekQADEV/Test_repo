import os

def check_file_path(file_path):
    if os.path.exists(file_path):
        return True
    else:
        return False

def check_file_extension(file_path):
    file_extension = os.path.splitext(file_path)[1]
    if file_extension == ".md":
        return True
    else:
        return False

def check_code_rules(code):
    if "excessive use of comments" in code:
        return False
    elif "walls of code" in code:
        return False
    else:
        return True

def check_code_language(code):
    if "C" in code:
        return True
    else:
        return False

def check_code_advice(code):
    if "helpful" in code:
        return True
    elif "Test your code" in code:
        return True
    elif "indentation is good" in code:
        return True
    else:
        return False

def validate_contributing_guidelines(file_path, code):
    if check_file_path(file_path) and check_file_extension(file_path) and check_code_rules(code) and check_code_language(code) and check_code_advice(code):
        return True
    else:
        return False