#ifndef slic3r_FillBioRectilinear_hpp_
#define slic3r_FillBioRectilinear_hpp_

#include "../libslic3r.h"

#include "Fill.hpp"

namespace Slic3r {

class FillBioRectilinear : public Fill
{
public:
    virtual Fill* clone() const { return new FillBioRectilinear(*this); };
    virtual ~FillBioRectilinear() {}
    virtual bool can_solid() const { return true; };

protected:
	virtual void _fill_surface_single(
	    unsigned int                     thickness_layers,
	    const direction_t               &direction,
	    ExPolygon                       &expolygon,
	    Polylines*                      polylines_out);

	void _fill_single_direction(ExPolygon expolygon, const direction_t &direction,
	    coord_t x_shift, Polylines* out);
};
};
#endif //slic3r_FillBioRectilinear_hpp_
