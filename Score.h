#pragma once

#include "NumericalPanel.h"

class Score : public NumericalPanel
{

	private:
		
		int units;
		int dozens;
		int hundreds;
		int thousands; 
		int ten_thousands;
		int hundreds_thousands;
		int millions;


		virtual void doUpdate(const std::string& update_info);
		void drawScore();
	public:

		Score();

		virtual void reset();
};