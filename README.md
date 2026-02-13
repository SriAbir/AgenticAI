We simulated two-role agent interactions — a Designer (responsible for conceptual design and improvement) and a Programmer (responsible for implementation) — across 12 model pair combinations derived from 7 open-source LLMs: Gemma 2, Gemma 3, LLaMA 3.2, LLaMA 3.3, DeepSeek-R1, MiniCPM, and Qwen3

Each agent pair was prompted to collaboratively solve a C programming task (“Write a mathematical game of Fibonacci”) under controlled conditions. The detailed results and code are provided here.

The content of each folder/file is explained as follows:

AgentConversation- Excel files containing agent conversation transcripts along with manually coded topic mappings and conversational pattern annotations

agenticAI-main- The framework and program used to generate the conversation along with instructions to replicate it

BLEU- BLEU score graphs (Designer vs Programmer) for all the agent pairs

ROUGE- ROUGE score graphs (Designer vs Programmer) for all the agent pairs

Violin- Violin plot for word count (Designer vs Programmer) for all the agent pairs

Summary_AgentBehaviour.xlsx- Presents 1) the summary of solution convergence and conversation behaviour of each agent pair, 2) All the topic groups under which the conversations were classified 3) Excel tab for each agent pair showing compilation success rate, programming language distribution and topic disctribution.

