// Copyright (C) 2015 Derek Chafin

// This program is free software: you can redistribute it and/or modify it
// under the terms of the GNU Affero General Public License as published by
// the Free Software Foundation, either version 3 of the License, or (at your
// option) any later version.

// This program is distributed in the hope that it will be useful, but WITHOUT
// ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
// FITNESS FOR A PARTICULAR PURPOSE.  See the GNU Affero General Public
// License for more details.

// You should have received a copy of the GNU Affero General Public License
// along with this program.  If not, see <http://www.gnu.org/licenses/>.
#ifndef thermometer_h
#define thermometer_h

struct temp_t {
	float fahrenheit;
	float celsius;
};

class Thermometer
{
private:

public:
	static void boot(void);
	static void printTemperature(void);
	static void update(void);
	static void printFahrenheit(void);
	static void printTitle(void);
};

#endif