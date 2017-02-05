# Push the www directory to Github Pages

gh-pages: Makefile
	rm -rf gh-pages
	mkdir gh-pages
	cp pcb/plot_files/keytee.zip gh-pages/
	cp pcb/plot_files/pcb.pdf gh-pages/
	cp pcb/plot_files/component-side.pdf gh-pages/
	echo '<h3>Generated files of project <a href="https://github.com/trebb/keytee">keytee</a></h3>' > gh-pages/index.html
	ls gh-pages | \
		grep -v index.html | \
		sed -e 's/^\(.*\)$$/<a href="\1">\1<\/a><br>/' >> gh-pages/index.html

publish: gh-pages
	(cd gh-pages; \
	git init; \
	git add ./; \
	git commit -a -m "gh-pages pseudo commit"; \
	git push git@github.com:trebb/keytee.git +master:gh-pages)

clean:
	rm -rf gh-pages
