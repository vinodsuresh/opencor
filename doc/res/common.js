function doHeaderAndContentsMenu(pageName, relativePath, r, g, b, data) {
    document.write("<div class=\"header\">");
    document.write("    "+pageName);
    document.write("</div>");
    document.write("");
    document.write("<style>");
    document.write("    ul.contentsMenu {");
    document.write("        margin: 0px;");
    document.write("        position: fixed;");
    document.write("        top: 3px;");
    document.write("        right: 3px;");
    document.write("    }");
    document.write("");
    document.write("    ul.contentsMenu li {");
    document.write("        list-style: none;");
    document.write("    }");
    document.write("");
    document.write("    ul.contentsMenu li ul {");
    document.write("        visibility: hidden;");
    document.write("        margin: 0px;");
    document.write("        padding: 0px;");
    document.write("        position: fixed;");
    document.write("        top: 29px;");
    document.write("        right: 0px;");
    document.write("        background: rgb(249, 249, 249);");
    document.write("        border: 2px solid rgb("+r+", "+g+", "+b+");");
    document.write("        border-top-style: none;");
    document.write("        border-radius: 0px 0px 5px 5px;");
    document.write("        box-shadow: 0px 5px 5px -5px rgb(103, 103, 103);");
    document.write("    }");
    document.write("");
    document.write("    ul.contentsMenu li ul li {");
    document.write("        margin: 2px;");
    document.write("        font-size: 9pt;");
    document.write("        font-weight: normal;");
    document.write("    }");
    document.write("");
    document.write("    ul.contentsMenu li ul li span.selectedMenuItem {");
    document.write("        display: block;");
    document.write("        background-color: rgba("+r+", "+g+", "+b+", 0.13);");
    document.write("        color: rgb("+r+", "+g+", "+b+");");
    document.write("    }");
    document.write("");
    document.write("    ul.contentsMenu li ul li.lastMenuItem span.selectedMenuItem {");
    document.write("        border-radius: 0px 0px 3px 3px;");
    document.write("    }");
    document.write("");
    document.write("    ul.contentsMenu li ul li a {");
    document.write("        display: block;");
    document.write("    }");
    document.write("");
    document.write("    ul.contentsMenu li ul li a:hover {");
    document.write("        background-color: rgba("+r+", "+g+", "+b+", 0.79);");
    document.write("        color: rgb(255, 255, 255);");
    document.write("        text-decoration: none;");
    document.write("    }");
    document.write("");
    document.write("    ul.contentsMenu li ul li.menuSeparator {");
    document.write("        margin: 0px;");
    document.write("        border-top: 1px solid rgb("+r+", "+g+", "+b+");");
    document.write("    }");
    document.write("");
    document.write("    ul.contentsMenu li ul li.lastMenuItem a {");
    document.write("        border-radius: 0px 0px 3px 3px;");
    document.write("    }");
    document.write("</style>");
    document.write("");
    document.write("<ul class=\"contentsMenu\">");
    document.write("    <li>");
    document.write("        <img src=\""+relativePath+"/res/pics/oxygen/actions/help-about.png\" width=24 height=24 alt=\"Contents\">");
    document.write("        <ul>");

    for (i = 0; i < data.length; ++i)
        if (data[i].length) {
            // We are dealing with a menu item

            var path = data[i][3]?data[i][2]:relativePath+"/"+data[i][2];
            var indent = "";

            for (j = 0; j < data[i][0]; ++j)
                indent += "&nbsp;&nbsp;&nbsp;&nbsp;"

            var currentMenuItem = false;

            if (   (data[i][1].toLowerCase() == pageName.toLowerCase())
                || ((pageName == "OpenCOR") && (data[i][1] == "Home"))
                || (pageName == data[i][1]+" Plugin"))
                currentMenuItem = true;

            if (i != data.length-1) {
                // A 'normal' menu item

                if (currentMenuItem)
                    document.write("            <li><span class=\"selectedMenuItem\">"+indent+data[i][1]+"</span></li>");
                else
                    document.write("            <li><a href=\""+path+"\">"+indent+data[i][1]+"</a></li>");
            } else {
                // The last menu item, so we have some special rendering for it

                if (currentMenuItem)
                    document.write("            <li class=\"lastMenuItem\"><span class=\"selectedMenuItem\">"+indent+data[i][1]+"</span></li>");
                else
                    document.write("            <li class=\"lastMenuItem\"><a href=\""+path+"\">"+indent+data[i][1]+"</a></li>");
            }
        } else {
            // We are dealing with a menu separator

            document.write("            <li class=\"menuSeparator\"></li>");
        }

    document.write("        </ul>");
    document.write("    </li>");
    document.write("</ul>");
}

$(document).ready(function() {
    $("ul.contentsMenu > li").mouseenter(function() {
        $(this).find('ul').css('visibility', 'visible');
    });

    $("ul.contentsMenu > li").mouseleave(function() {
        $(this).find('ul').css('visibility', 'hidden');
    });
});

function copyright() {
    var date = new Date();

    document.write("<div class=\"copyright\">");
    document.write("    Copyright ©2011-"+date.getFullYear());
    document.write("</div>");
}
