puts 512.times.map{|i|[n=i^i>>1,n^1023]}.flatten.rotate.map{|e|"%010b"%e}