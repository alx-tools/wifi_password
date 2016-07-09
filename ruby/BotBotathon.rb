#!/usr/bin/ruby
#
#  Run this for
#
# \ \      / (_)/ _(_) |  _ \ __ _ ___ _____      _____  _ __ __| |
#  \ \ /\ / /| | |_| | | |_) / _` / __/ __\ \ /\ / / _ \| '__/ _` |
#   \ V  V / | |  _| | |  __/ (_| \__ \__ \\ V  V / (_) | | | (_| |
#    \_/\_/  |_|_| |_| |_|   \__,_|___/___/ \_/\_/ \___/|_|  \__,_|
#
#  SSID: Holberton School Guest
#
#  https://www.holbertonschool.com
#



puts [156, 33, 98, 235].map { |number|
	if number % 3 == 0
		'Bot'
	elsif number % 5 == 0
		'athon'
	end
}.join


# If you don't understand this, ask a student.
