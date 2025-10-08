We simulated two-role agent interactions — a Designer (responsible for conceptual design and improvement) and a Programmer (responsible for implementation) — across 12 model pair combinations derived from 7 open-source LLMs:

Gemma 2, Gemma 3, LLaMA 3.2, LLaMA 3.3, DeepSeek-R1, MiniCPM, and Qwen3

Each agent pair was prompted to collaboratively solve a C programming task (“Write a mathematical game of Fibonacci”) under controlled conditions, optionally including compiler feedback.

The repository provides:

Agent conversation transcripts and compiler logs

Quantitative metrics (BLEU, ROUGE, violin plots for word counts)

Manually coded topic mappings and conversational pattern annotations

Raw Results from which the final derived results were used in the paper
