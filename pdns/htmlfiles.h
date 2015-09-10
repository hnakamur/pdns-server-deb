INCBIN(local_js, "./dnsdistdist/html/local.js");
INCBIN(graph_css, "./dnsdistdist/html/graph.css");
INCBIN(js_moment_min_js, "./dnsdistdist/html/js/moment.min.js");
INCBIN(js_jsrender_js, "./dnsdistdist/html/js/jsrender.js");
INCBIN(js_purl_js, "./dnsdistdist/html/js/purl.js");
INCBIN(js_d3_v3_js, "./dnsdistdist/html/js/d3.v3.js");
INCBIN(js_jquery_1_8_3_min_js, "./dnsdistdist/html/js/jquery-1.8.3.min.js");
INCBIN(js_rickshaw_min_js, "./dnsdistdist/html/js/rickshaw.min.js");
INCBIN(js_underscore_min_js, "./dnsdistdist/html/js/underscore-min.js");
INCBIN(lines_css, "./dnsdistdist/html/lines.css");
INCBIN(detail_css, "./dnsdistdist/html/detail.css");
INCBIN(legend_css, "./dnsdistdist/html/legend.css");
INCBIN(index_html, "./dnsdistdist/html/index.html");
map<string,string> g_urlmap={
{"local.js", string((const char*)glocal_jsData, glocal_jsSize)},
{"graph.css", string((const char*)ggraph_cssData, ggraph_cssSize)},
{"js/moment.min.js", string((const char*)gjs_moment_min_jsData, gjs_moment_min_jsSize)},
{"js/jsrender.js", string((const char*)gjs_jsrender_jsData, gjs_jsrender_jsSize)},
{"js/purl.js", string((const char*)gjs_purl_jsData, gjs_purl_jsSize)},
{"js/d3.v3.js", string((const char*)gjs_d3_v3_jsData, gjs_d3_v3_jsSize)},
{"js/jquery-1.8.3.min.js", string((const char*)gjs_jquery_1_8_3_min_jsData, gjs_jquery_1_8_3_min_jsSize)},
{"js/rickshaw.min.js", string((const char*)gjs_rickshaw_min_jsData, gjs_rickshaw_min_jsSize)},
{"js/underscore-min.js", string((const char*)gjs_underscore_min_jsData, gjs_underscore_min_jsSize)},
{"lines.css", string((const char*)glines_cssData, glines_cssSize)},
{"detail.css", string((const char*)gdetail_cssData, gdetail_cssSize)},
{"legend.css", string((const char*)glegend_cssData, glegend_cssSize)},
{"index.html", string((const char*)gindex_htmlData, gindex_htmlSize)},
};
