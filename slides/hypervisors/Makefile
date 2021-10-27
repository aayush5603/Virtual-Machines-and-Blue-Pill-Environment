MAIN = template/pre
OUTNAME = presentation.pdf
OUTDIR = latex.out

LATEXRUN = latexrun
LATEXCMD = pdflatex

all: build

build:
	python3 $(LATEXRUN) -o $(OUTNAME) -O $(OUTDIR) --latex-cmd $(LATEXCMD) --bibtex-cmd biber $(MAIN).tex

preview:
	convert -density 80 $(OUTNAME).pdf $(OUTNAME)-thumb.png
	convert -density 250 $(OUTNAME).pdf $(OUTNAME).png

clean:
	$(LATEXRUN) --clean-all
	rm -rf $(OUTDIR)
	rm -f $(OUTNAME)*.png
