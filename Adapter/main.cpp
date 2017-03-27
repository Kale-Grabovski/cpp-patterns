#include <memory>
#include "ChiefAdapter.h"

int main () {
	std::shared_ptr<ChiefAdapter> chiefAdapter(new ChiefAdapter);
	chiefAdapter->makeBreakfast();
	chiefAdapter->makeDinner();
	chiefAdapter->makeSupper();
    
    return 0;
}
