all: $(addsuffix .pdf, $(basename $(wildcard *.tex)))

%.pdf: %.tex
	make clean
	pdflatex $(basename $^)
	#bibtex $(basename $^)
	pdflatex $(basename $^)
	pdflatex $(basename $^)

clean:
	-rm *.pdf *.out *.bbl *.log *.blg *.aux \
            *.log *.snm *.nav *.toc
