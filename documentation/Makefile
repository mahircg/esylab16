SVGS= $(wildcard figures/*.svg)
IMGS= $(SVGS:.svg=.pdf)

SRCS= $(wildcard *.tex)
#SRCS+= refs3.bib

docu=soc
TARGET=$(addsuffix .pdf,$(docu))

all: target images

target: $(TARGET) $(IMGS)

images: $(IMGS)

figures/%.pdf: figures/%.svg
	inkscape -z -T -A $@ $<

%.pdf: %.tex $(SRCS) $(IMGS)
	pdflatex -jobname=$(basename $@) -synctex=1 -interaction=nonstopmode -shell-escape $<
	pdflatex -jobname=$(basename $@) -synctex=1 -interaction=nonstopmode -shell-escape $<

## Other Targets
clean:
	rm -f $(IMGS) *.aux *.log *.dvi *.pdf *.ps *.pyg *.toc *.loc *.lot *.out *.lof *.lol *.synctex.gz

.PHONY: all clean
