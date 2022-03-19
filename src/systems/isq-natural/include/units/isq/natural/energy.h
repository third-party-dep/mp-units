// The MIT License (MIT)
//
// Copyright (c) 2018 Mateusz Pusz
//
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included in all
// copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
// SOFTWARE.

#pragma once

#include <units/isq/natural/force.h>
#include <units/isq/natural/length.h>

// IWYU pragma: begin_exports
#include <units/isq/dimensions/energy.h>
#include <units/isq/natural/units.h>
#include <units/quantity.h>
#include <units/reference.h>
#include <units/symbol_text.h>
// IWYU pragma: end_exports

namespace units::isq::natural {

struct dim_energy : isq::dim_energy<dim_energy, gigaelectronvolt, dim_force, dim_length> {};

template<UnitOf<dim_energy> U, Representation Rep = double>
using energy = quantity<dim_energy, U, Rep>;

#ifndef UNITS_NO_REFERENCES

namespace energy_references {

inline constexpr auto GeV = reference<dim_energy, gigaelectronvolt>{};

}  // namespace energy_references

namespace references {

using namespace energy_references;

}  // namespace references

#endif  // UNITS_NO_REFERENCES

}  // namespace units::isq::natural

#ifndef UNITS_NO_ALIASES

namespace units::aliases::isq::natural::inline energy {

template<Representation Rep = double>
using GeV = units::isq::natural::energy<units::isq::natural::gigaelectronvolt, Rep>;

}  // namespace units::aliases::isq::natural::inline energy

#endif  // UNITS_NO_ALIASES
