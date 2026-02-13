# agenticAI project

This project is a simple project that illustrates how to use two different AI models (one as a programmer proxy and another as a designer proxy) to have a conversation with each other. 

The idea is to test how the models behave over time, so please let the conversation run for a while. 

This program has only one argument --prompt "What you want the model to do".

## What happens in the code
There is one class that keeps the conversation with the model. 

The main script instantiates two of these classes, starts the conversation between two models in two different servers. 

## Replication Instructions

Now lets follow the detailed instructions to replicate this.

1.  Prequisites
    (i) Python (>= 3.9 recommended)

   (ii) Download & Install Ollama from https://ollama.com/. Please note that you should download Ollama in the two servers where your Designer and Programmer models will be running.
   
  (iii) Pull the required models in these srevers---- e.g., ollama pull llama3

2.  Installation & Setup

   (i) git clone https://github.com/SriAbir/AgenticAI.git

   (ii) cd AgenticAI

   (iii) Create a virtual environment

   (iv)  Open the mainT.py file and replace the server_address="http://deeperthought.cse.chalmers.se" and server_address="http://deepthought.cse.chalmers.se" with your own server addresses for Designer & programmer. Also change the MAX_ITERATIONS value according to your requirement. You can also modify the name of the output file where the conversation transcripts are saved - agentProgrammer.save_to_excel("programmer_conversation_test_comp2.xlsx")

   (v) Execute the  mainT.py file as  python mainT.py --prompt "Write a mathematic game of Fibonacci" (You can change the task prompt according to your requirement)

   (vi) After the execution finishes you will get the conversation ready in the file excel file you specified in step iv

3. You can now run gcc compiler on the generated c codes, calculate BLEU, ROUGE, word count, etc. (refer to analyze.ipynb)

   Congratualattions!!! you have succesfully build a Designer:Programmer based multi-agent system that talk to each other and try to solve problems.
