// Populate the sidebar
//
// This is a script, and not included directly in the page, to control the total size of the book.
// The TOC contains an entry for each page, so if each page includes a copy of the TOC,
// the total size of the page becomes O(n**2).
class MDBookSidebarScrollbox extends HTMLElement {
    constructor() {
        super();
    }
    connectedCallback() {
        this.innerHTML = '<ol class="chapter"><li class="chapter-item expanded affix "><a href="beginning/wiki.html">Wikin</a></li><li class="chapter-item expanded affix "><a href="beginning/motivation.html">Motivation</a></li><li class="chapter-item expanded affix "><li class="part-title">C++ Language</li><li class="chapter-item expanded "><a href="memory/memory.html"><strong aria-hidden="true">1.</strong> Memory</a></li><li><ol class="section"><li class="chapter-item expanded "><a href="memory/static_types.html"><strong aria-hidden="true">1.1.</strong> Static types</a></li></ol></li><li class="chapter-item expanded "><a href="branching/branching.html"><strong aria-hidden="true">2.</strong> Branching</a></li><li><ol class="section"><li class="chapter-item expanded "><a href="branching/condition.html"><strong aria-hidden="true">2.1.</strong> Condition</a></li><li class="chapter-item expanded "><a href="branching/if.html"><strong aria-hidden="true">2.2.</strong> If</a></li><li class="chapter-item expanded "><a href="branching/switch.html"><strong aria-hidden="true">2.3.</strong> Switch</a></li></ol></li><li class="chapter-item expanded "><a href="scope/scope.html"><strong aria-hidden="true">3.</strong> Scope</a></li><li><ol class="section"><li class="chapter-item expanded "><a href="scope/lifetimes.html"><strong aria-hidden="true">3.1.</strong> Lifetimes</a></li><li class="chapter-item expanded "><a href="scope/global_scope.html"><strong aria-hidden="true">3.2.</strong> Global Scope</a></li><li class="chapter-item expanded "><a href="scope/namespace.html"><strong aria-hidden="true">3.3.</strong> Namespaces</a></li></ol></li><li class="chapter-item expanded "><a href="pointers/pointers.html"><strong aria-hidden="true">4.</strong> Pointers</a></li><li><ol class="section"><li class="chapter-item expanded "><a href="pointers/referance_and_dereferance.html"><strong aria-hidden="true">4.1.</strong> Referances och derefeances</a></li><li class="chapter-item expanded "><a href="pointers/bigger_data.html"><strong aria-hidden="true">4.2.</strong> Större data och pointers</a></li><li class="chapter-item expanded "><a href="pointers/pointers_and_scope.html"><strong aria-hidden="true">4.3.</strong> Pointers och scope</a></li><li class="chapter-item expanded "><a href="pointers/smart_pointers.html"><strong aria-hidden="true">4.4.</strong> Smart pointers</a></li></ol></li><li class="chapter-item expanded "><div><strong aria-hidden="true">5.</strong> Destructing</div></li><li class="chapter-item expanded "><a href="array.html"><strong aria-hidden="true">6.</strong> Arrays</a></li><li class="chapter-item expanded "><div><strong aria-hidden="true">7.</strong> Functions</div></li><li class="chapter-item expanded "><div><strong aria-hidden="true">8.</strong> Declaration vs definition</div></li><li class="chapter-item expanded "><div><strong aria-hidden="true">9.</strong> Object orienterat</div></li><li><ol class="section"><li class="chapter-item expanded "><div><strong aria-hidden="true">9.1.</strong> Structs</div></li><li class="chapter-item expanded "><div><strong aria-hidden="true">9.2.</strong> Classes</div></li><li><ol class="section"><li class="chapter-item expanded "><div><strong aria-hidden="true">9.2.1.</strong> Class members</div></li><li class="chapter-item expanded "><div><strong aria-hidden="true">9.2.2.</strong> Class scope</div></li></ol></li><li class="chapter-item expanded "><div><strong aria-hidden="true">9.3.</strong> Inheritance</div></li><li><ol class="section"><li class="chapter-item expanded "><div><strong aria-hidden="true">9.3.1.</strong> Virtual Classes</div></li></ol></li></ol></li></ol>';
        // Set the current, active page, and reveal it if it's hidden
        let current_page = document.location.href.toString().split("#")[0];
        if (current_page.endsWith("/")) {
            current_page += "index.html";
        }
        var links = Array.prototype.slice.call(this.querySelectorAll("a"));
        var l = links.length;
        for (var i = 0; i < l; ++i) {
            var link = links[i];
            var href = link.getAttribute("href");
            if (href && !href.startsWith("#") && !/^(?:[a-z+]+:)?\/\//.test(href)) {
                link.href = path_to_root + href;
            }
            // The "index" page is supposed to alias the first chapter in the book.
            if (link.href === current_page || (i === 0 && path_to_root === "" && current_page.endsWith("/index.html"))) {
                link.classList.add("active");
                var parent = link.parentElement;
                if (parent && parent.classList.contains("chapter-item")) {
                    parent.classList.add("expanded");
                }
                while (parent) {
                    if (parent.tagName === "LI" && parent.previousElementSibling) {
                        if (parent.previousElementSibling.classList.contains("chapter-item")) {
                            parent.previousElementSibling.classList.add("expanded");
                        }
                    }
                    parent = parent.parentElement;
                }
            }
        }
        // Track and set sidebar scroll position
        this.addEventListener('click', function(e) {
            if (e.target.tagName === 'A') {
                sessionStorage.setItem('sidebar-scroll', this.scrollTop);
            }
        }, { passive: true });
        var sidebarScrollTop = sessionStorage.getItem('sidebar-scroll');
        sessionStorage.removeItem('sidebar-scroll');
        if (sidebarScrollTop) {
            // preserve sidebar scroll position when navigating via links within sidebar
            this.scrollTop = sidebarScrollTop;
        } else {
            // scroll sidebar to current active section when navigating via "next/previous chapter" buttons
            var activeSection = document.querySelector('#sidebar .active');
            if (activeSection) {
                activeSection.scrollIntoView({ block: 'center' });
            }
        }
        // Toggle buttons
        var sidebarAnchorToggles = document.querySelectorAll('#sidebar a.toggle');
        function toggleSection(ev) {
            ev.currentTarget.parentElement.classList.toggle('expanded');
        }
        Array.from(sidebarAnchorToggles).forEach(function (el) {
            el.addEventListener('click', toggleSection);
        });
    }
}
window.customElements.define("mdbook-sidebar-scrollbox", MDBookSidebarScrollbox);
