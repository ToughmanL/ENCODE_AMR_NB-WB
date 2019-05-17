# ENCODE_AMR_NB-WB
The source code fo AMR_NB/WB encodec is supported by 3GPP "https://www.3gpp.org/DynaReport/26-series.htm"
But the code on the website is a bit confusing. So I rebuilt the code into a working project.

The program input file is "mono 16bit .pcm" nb:8000hz, wb:16000hz and the output is ".bat" file.
My default encoding rate is 12.2kbit/s in NB and 23.85 kbit/s in WB.

The data set can be downloaded from http://www.m-ailabs.bayern/en/the-mailabs-speech-dataset/.
It consists of eight languages that accumulate more than 10,000 hours.
