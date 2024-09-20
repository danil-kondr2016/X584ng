add_rules("mode.debug", "mode.release")

add_requires("wxwidgets 3.2.4")

set_encodings("utf-8")

target("x584ng")
  set_kind("binary")
  add_files("*.cpp")
  add_packages("wxwidgets")
