Expert and Package Manager for Mutiple RAD Studio IDEs
======================================================

Author:   David Hoyle

Version:  1.2c

Date:     15 Jul 2018

Web Page: http://www.davidghoyle.co.uk/WordPress/?page_id=1361

## Overview

The purpose of this application is to provide a single location from which to
manage Experts and Packages loaded into all version of RAD Studio, both main
installations and alternate registry keys that are created by using the command
line switch `-r` with `BDS.EXE`.

This application can be useful to all RAD Studio users but especially those who
write IDE plug-ins and need to test them in custom registry keys.

## Use

The application, once loaded, is split into 2 main areas, a treeview of the
RAD Studio installations from the registry on the left and a tabbed view of the
entries for the selected treenode on the right. The tabbed area provides access
to the selected RAD Studio installation's list of Experts, Known IDE Packages
and Known Packages.

## Current Limitations

The tabbed veiw does not currently provide access to the sub-keys for C++
Builder and Delphi which are under the Known IDE Packages in the registry.

## Binaries

You can download a binary of this project if you don't want to compile it
yourself from the web page above.