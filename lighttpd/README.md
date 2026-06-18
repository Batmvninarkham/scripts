#====================================
batman < paulomartin012@gmail.com>
github.com/batmvninarkham
#====================================

# run the setup script the other is invoked by it
to test if the server works

cat > lighttpd.conf <<'EOF'\nserver.document-root = "/tmp"\nserver.bind = "127.0.0.1"\nserver.port = 8080\n\nmimetype.assign = (\n    ".txt"  => "text/plain",\n    ".html" => "text/html"\n)\nEOF
./src/lighttpd -tt -f lighttpd.conf
./src/lighttpd -D -f lighttpd.conf
curl 
