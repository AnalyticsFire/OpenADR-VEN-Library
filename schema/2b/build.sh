#!/bin/bash

# the following command will generate c++ source files from the OADR 2.0b schema files
# 'xsd' from code synthesys must be in your path
xsd cxx-tree --file-per-type --generate-serialization --generate-polymorphic --polymorphic-type-all --output-dir ../../oadrsd/oadrsd/2b/  --namespace-map http://openadr.org/oadr-2.0b/2012/07=oadr2b::oadr --namespace-map http://docs.oasis-open.org/ns/energyinterop/201110=oadr2b::ei --namespace-map http://www.opengis.net/gml/3.2=oadr2b::gml --namespace-map http://docs.oasis-open.org/ns/emix/2011/06=oadr2b::emix --namespace-map http://www.w3.org/2009/xmldsig11#=oadr2b::dsig11 --namespace-map http://www.w3.org/2000/09/xmldsig#=oadr2b::sig --namespace-map http://openadr.org/oadr-2.0b/2012/07/xmldsig-properties=oadr2b::dsp oadr_20b.xsd oadr_atom.xsd oadr_ei_20b.xsd oadr_emix_20b.xsd oadr_gml_20b.xsd oadr_greenbutton.xsd oadr_ISO_ISO3AlphaCurrencyCode_20100407.xsd oadr_power_20b.xsd oadr_pyld_20b.xsd oadr_siscale_20b.xsd oadr_strm_20b.xsd oadr_xcal_20b.xsd oadr_xml.xsd oadr_xmldsig-properties-schema.xsd oadr_xmldsig.xsd oadr_xmldsig11.xsd

