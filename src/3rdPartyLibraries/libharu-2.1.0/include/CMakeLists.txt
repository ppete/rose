
include_directories(${KDE4_INCLUDES} ${KDE4_INCLUDE_DIR} ${QT_INCLUDES} )

configure_file(${CMAKE_CURRENT_SOURCE_DIR}/hpdf_config.h.cmake ${CMAKE_CURRENT_BINARY_DIR}/hpdf_config.h)


########### install files ###############

install(FILES  hpdf.h hpdf_annotation.h hpdf_encoder.h hpdf_ext_gstate.h  					hpdf_mmgr.h hpdf_pages.h hpdf_utils.h hpdf_catalog.h  					hpdf_consts.h hpdf_encryptdict.h hpdf_fontdef.h hpdf_image.h  					hpdf_objects.h hpdf_streams.h hpdf_conf.h hpdf_destination.h  					hpdf_encrypt.h hpdf_font.h hpdf_info.h hpdf_outline.h hpdf_types.h  					hpdf_doc.h hpdf_error.h hpdf_gstate.h hpdf_list.h hpdf_page_label.h  					hpdf_u3d.h hpdf_config.h hpdf_version.h DESTINATION ${INCLUDE_INSTALL_DIR})



#original Makefile.am contents follow:

#AUTOMAKE_OPTIONS = foreign no-dependencies
#
#include_HEADERS =   hpdf.h hpdf_annotation.h hpdf_encoder.h hpdf_ext_gstate.h \
#					hpdf_mmgr.h hpdf_pages.h hpdf_utils.h hpdf_catalog.h \
#					hpdf_consts.h hpdf_encryptdict.h hpdf_fontdef.h hpdf_image.h \
#					hpdf_objects.h hpdf_streams.h hpdf_conf.h hpdf_destination.h \
#					hpdf_encrypt.h hpdf_font.h hpdf_info.h hpdf_outline.h hpdf_types.h \
#					hpdf_doc.h hpdf_error.h hpdf_gstate.h hpdf_list.h hpdf_page_label.h \
#					hpdf_u3d.h hpdf_config.h hpdf_version.h
