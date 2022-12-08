/******************************************************************************
The MIT License(MIT)

Embedded Template Library.
https://github.com/ETLCPP/etl
https://www.etlcpp.com

Copyright(c) 2017 John Wellbelove

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files(the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and / or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions :

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.
******************************************************************************/

/*[[[cog
import cog
cog.outl("#if 0")
]]]*/
/*[[[end]]]*/
#error THIS HEADER IS A GENERATOR. DO NOT INCLUDE.
/*[[[cog
import cog
cog.outl("#endif")
]]]*/
/*[[[end]]]*/

/*[[[cog
import cog
cog.outl("//***************************************************************************")
cog.outl("// THIS FILE HAS BEEN AUTO GENERATED. DO NOT EDIT THIS FILE.")
cog.outl("//***************************************************************************")
]]]*/
/*[[[end]]]*/

//***************************************************************************
// To generate to header file, run this at the command line.
// Note: You will need Python and COG installed.
//
// python -m cogapp -d -e -ovariant_pool.h -DNTypes=<n> variant_pool_generator.h
// Where <n> is the number of types to support.
//
// e.g.
// To generate handlers for up to 16 types...
// python -m cogapp -d -e -ovariant_pool.h -DNTypes=16 variant_pool_generator.h
//
// See generate.bat
//***************************************************************************

#ifndef ETL_VARIANT_POOL_INCLUDED
#define ETL_VARIANT_POOL_INCLUDED

#include "platform.h"
#include "pool.h"
#include "type_traits.h"
#include "static_assert.h"
#include "largest.h"

#include <stdint.h>

namespace etl
{
  //***************************************************************************
  /*[[[cog
  import cog
  cog.outl("template <const size_t MAX_SIZE_,")
  cog.outl("          typename T1,")
  for n in range(2, int(NTypes)):
      cog.outl("          typename T%s = void," % n)
  cog.outl("          typename T%s = void>" % int(NTypes))
  cog.outl("class variant_pool")
  cog.out("  : public etl::generic_pool<")
  cog.out("etl::largest<")
  for n in range(1, int(NTypes)):
      cog.out("T%s, " % n)
  cog.outl("T%s>::size," % int(NTypes))
  cog.out("                             etl::largest<")
  for n in range(1, int(NTypes)):
      cog.out("T%s, " % n)
  cog.outl("T%s>::alignment," % int(NTypes))
  cog.outl("                             MAX_SIZE_>")
  ]]]*/
  /*[[[end]]]*/
  {
  public:

    /*[[[cog
    import cog
    cog.out("typedef etl::generic_pool<")
    cog.out("etl::largest<")
    for n in range(1, int(NTypes)):
        cog.out("T%s, " % n)
    cog.outl("T%s>::size," % int(NTypes))
    cog.out("                          etl::largest<")
    for n in range(1, int(NTypes)):
        cog.out("T%s, " % n)
    cog.outl("T%s>::alignment," % int(NTypes))
    cog.outl("                          MAX_SIZE_> base_t;")
    ]]]*/
    /*[[[end]]]*/

    static const size_t MAX_SIZE = MAX_SIZE_;

    //*************************************************************************
    /// Default constructor.
    //*************************************************************************
    variant_pool()
    {
    }

#if ETL_CPP11_NOT_SUPPORTED || ETL_USING_STLPORT
    //*************************************************************************
    /// Creates the object. Default constructor.
    //*************************************************************************
    template <typename T>
    T* create()
    {
      /*[[[cog
      import cog
      cog.out("ETL_STATIC_ASSERT((etl::is_one_of<T, ")
      for n in range(1, int(NTypes)):
          cog.out("T%s, " % n)
          if n % 16 == 0:
              cog.outl("")
              cog.out("                              ")
      cog.outl("T%s>::value), \"Unsupported type\");" % int(NTypes))
      ]]]*/
      /*[[[end]]]*/

      return base_t::template create<T>();
    }

    //*************************************************************************
    /// Creates the object. One parameter constructor.
    //*************************************************************************
    template <typename T, typename TP1>
    T* create(const TP1& p1)
    {
      /*[[[cog
      import cog
      cog.out("ETL_STATIC_ASSERT((etl::is_one_of<T, ")
      for n in range(1, int(NTypes)):
          cog.out("T%s, " % n)
          if n % 16 == 0:
              cog.outl("")
              cog.out("                              ")
      cog.outl("T%s>::value), \"Unsupported type\");" % int(NTypes))
      ]]]*/
      /*[[[end]]]*/

      return base_t::template create<T>(p1);
    }

    //*************************************************************************
    /// Creates the object. Two parameter constructor.
    //*************************************************************************
    template <typename T, typename TP1, typename TP2>
    T* create(const TP1& p1, const TP2& p2)
    {
      /*[[[cog
      import cog
      cog.out("ETL_STATIC_ASSERT((etl::is_one_of<T, ")
      for n in range(1, int(NTypes)):
          cog.out("T%s, " % n)
          if n % 16 == 0:
              cog.outl("")
              cog.out("                              ")
      cog.outl("T%s>::value), \"Unsupported type\");" % int(NTypes))
      ]]]*/
      /*[[[end]]]*/

      return base_t::template create<T>(p1, p2);
    }

    //*************************************************************************
    /// Creates the object. Three parameter constructor.
    //*************************************************************************
    template <typename T, typename TP1, typename TP2, typename TP3>
    T* create(const TP1& p1, const TP2& p2, const TP3& p3)
    {
      /*[[[cog
      import cog
      cog.out("ETL_STATIC_ASSERT((etl::is_one_of<T, ")
      for n in range(1, int(NTypes)):
          cog.out("T%s, " % n)
          if n % 16 == 0:
              cog.outl("")
              cog.out("                              ")
      cog.outl("T%s>::value), \"Unsupported type\");" % int(NTypes))
      ]]]*/
      /*[[[end]]]*/

      return base_t::template create<T>(p1, p2, p3);
    }

    //*************************************************************************
    /// Creates the object. Four parameter constructor.
    //*************************************************************************
    template <typename T, typename TP1, typename TP2, typename TP3, typename TP4>
    T* create(const TP1& p1, const TP2& p2, const TP3& p3, const TP4& p4)
    {
      /*[[[cog
      import cog
      cog.out("ETL_STATIC_ASSERT((etl::is_one_of<T, ")
      for n in range(1, int(NTypes)):
          cog.out("T%s, " % n)
          if n % 16 == 0:
              cog.outl("")
              cog.out("                              ")
      cog.outl("T%s>::value), \"Unsupported type\");" % int(NTypes))
      ]]]*/
      /*[[[end]]]*/

      return base_t::template create<T>(p1, p2, p3, p4);
    }
#else
    //*************************************************************************
    /// Creates the object from a type. Variadic parameter constructor.
    //*************************************************************************
    template <typename T, typename... Args>
    T* create(Args&&... args)
    {
      /*[[[cog
      import cog
      cog.out("ETL_STATIC_ASSERT((etl::is_one_of<T, ")
      for n in range(1, int(NTypes)):
          cog.out("T%s, " % n)
          if n % 16 == 0:
              cog.outl("")
              cog.out("                              ")
      cog.outl("T%s>::value), \"Unsupported type\");" % int(NTypes))
      ]]]*/
      /*[[[end]]]*/

      return base_t::template create<T>(args...);
    }
#endif

    //*************************************************************************
    /// Destroys the object.
    //*************************************************************************
    template <typename T>
    void destroy(const T* const p)
    {
      /*[[[cog
      import cog
      cog.out("ETL_STATIC_ASSERT((etl::is_one_of<T, ")
      for n in range(1, int(NTypes)):
          cog.out("T%s, " % n)
          if n % 16 == 0:
              cog.outl("")
              cog.out("                              ")
      cog.outl("T%s>::value ||" % int(NTypes))

      for n in range(1, int(NTypes)):
          cog.outl("                   etl::is_base_of<T, T%s>::value ||" % n)
      cog.outl("                   etl::is_base_of<T, T%s>::value), \"Invalid type\");" % int(NTypes))

      ]]]*/
      /*[[[end]]]*/

      base_t::destroy(p);
    }

    //*************************************************************************
    /// Returns the maximum number of items in the variant_pool.
    //*************************************************************************
    size_t max_size() const
    {
      return MAX_SIZE;
    }

  private:

    variant_pool(const variant_pool&) ETL_DELETE;
    variant_pool& operator =(const variant_pool&) ETL_DELETE;
  };

  //***************************************************************************
  /*[[[cog
  import cog
  cog.outl("template <typename T1,")
  for n in range(2, int(NTypes)):
      cog.outl("          typename T%s = void," % n)
  cog.outl("          typename T%s = void>" % int(NTypes))
  cog.outl("class variant_pool_ext")
  cog.out("  : public etl::generic_pool_ext<")
  cog.out("etl::largest<")
  for n in range(1, int(NTypes)):
      cog.out("T%s, " % n)
  cog.outl("T%s>::size," % int(NTypes))
  cog.out("                                 etl::largest<")
  for n in range(1, int(NTypes)):
      cog.out("T%s, " % n)
  cog.outl("T%s>::alignment>" % int(NTypes))
  ]]]*/
  /*[[[end]]]*/
  {
  public:

    /*[[[cog
    import cog
    cog.out("typedef etl::generic_pool_ext<")
    cog.out("etl::largest<")
    for n in range(1, int(NTypes)):
        cog.out("T%s, " % n)
    cog.outl("T%s>::size," % int(NTypes))
    cog.out("                              etl::largest<")
    for n in range(1, int(NTypes)):
        cog.out("T%s, " % n)
    cog.outl("T%s>::alignment> base_t;" % int(NTypes))
    ]]]*/
    /*[[[end]]]*/

    //*************************************************************************
    /// Default constructor.
    //*************************************************************************
    variant_pool_ext(typename base_t::element* buffer, size_t size)
      : base_t(buffer, size) 
    {
    }

#if ETL_CPP11_NOT_SUPPORTED || ETL_USING_STLPORT
    //*************************************************************************
    /// Creates the object. Default constructor.
    //*************************************************************************
    template <typename T>
    T* create()
    {
      /*[[[cog
      import cog
      cog.out("ETL_STATIC_ASSERT((etl::is_one_of<T, ")
      for n in range(1, int(NTypes)):
          cog.out("T%s, " % n)
          if n % 16 == 0:
              cog.outl("")
              cog.out("                              ")
      cog.outl("T%s>::value), \"Unsupported type\");" % int(NTypes))
      ]]]*/
      /*[[[end]]]*/

      return base_t::template create<T>();
    }

    //*************************************************************************
    /// Creates the object. One parameter constructor.
    //*************************************************************************
    template <typename T, typename TP1>
    T* create(const TP1& p1)
    {
      /*[[[cog
      import cog
      cog.out("ETL_STATIC_ASSERT((etl::is_one_of<T, ")
      for n in range(1, int(NTypes)):
          cog.out("T%s, " % n)
          if n % 16 == 0:
              cog.outl("")
              cog.out("                              ")
      cog.outl("T%s>::value), \"Unsupported type\");" % int(NTypes))
      ]]]*/
      /*[[[end]]]*/

      return base_t::template create<T>(p1);
    }

    //*************************************************************************
    /// Creates the object. Two parameter constructor.
    //*************************************************************************
    template <typename T, typename TP1, typename TP2>
    T* create(const TP1& p1, const TP2& p2)
    {
      /*[[[cog
      import cog
      cog.out("ETL_STATIC_ASSERT((etl::is_one_of<T, ")
      for n in range(1, int(NTypes)):
          cog.out("T%s, " % n)
          if n % 16 == 0:
              cog.outl("")
              cog.out("                              ")
      cog.outl("T%s>::value), \"Unsupported type\");" % int(NTypes))
      ]]]*/
      /*[[[end]]]*/

      return base_t::template create<T>(p1, p2);
    }

    //*************************************************************************
    /// Creates the object. Three parameter constructor.
    //*************************************************************************
    template <typename T, typename TP1, typename TP2, typename TP3>
    T* create(const TP1& p1, const TP2& p2, const TP3& p3)
    {
      /*[[[cog
      import cog
      cog.out("ETL_STATIC_ASSERT((etl::is_one_of<T, ")
      for n in range(1, int(NTypes)):
          cog.out("T%s, " % n)
          if n % 16 == 0:
              cog.outl("")
              cog.out("                              ")
      cog.outl("T%s>::value), \"Unsupported type\");" % int(NTypes))
      ]]]*/
      /*[[[end]]]*/

      return base_t::template create<T>(p1, p2, p3);
    }

    //*************************************************************************
    /// Creates the object. Four parameter constructor.
    //*************************************************************************
    template <typename T, typename TP1, typename TP2, typename TP3, typename TP4>
    T* create(const TP1& p1, const TP2& p2, const TP3& p3, const TP4& p4)
    {
      /*[[[cog
      import cog
      cog.out("ETL_STATIC_ASSERT((etl::is_one_of<T, ")
      for n in range(1, int(NTypes)):
          cog.out("T%s, " % n)
          if n % 16 == 0:
              cog.outl("")
              cog.out("                              ")
      cog.outl("T%s>::value), \"Unsupported type\");" % int(NTypes))
      ]]]*/
      /*[[[end]]]*/

      return base_t::template create<T>(p1, p2, p3, p4);
    }
#else
    //*************************************************************************
    /// Creates the object from a type. Variadic parameter constructor.
    //*************************************************************************
    template <typename T, typename... Args>
    T* create(Args&&... args)
    {
      /*[[[cog
      import cog
      cog.out("ETL_STATIC_ASSERT((etl::is_one_of<T, ")
      for n in range(1, int(NTypes)):
          cog.out("T%s, " % n)
          if n % 16 == 0:
              cog.outl("")
              cog.out("                              ")
      cog.outl("T%s>::value), \"Unsupported type\");" % int(NTypes))
      ]]]*/
      /*[[[end]]]*/

      return base_t::template create<T>(args...);
    }
#endif

    //*************************************************************************
    /// Destroys the object.
    //*************************************************************************
    template <typename T>
    void destroy(const T* const p)
    {
      /*[[[cog
      import cog
      cog.out("ETL_STATIC_ASSERT((etl::is_one_of<T, ")
      for n in range(1, int(NTypes)):
          cog.out("T%s, " % n)
          if n % 16 == 0:
              cog.outl("")
              cog.out("                              ")
      cog.outl("T%s>::value ||" % int(NTypes))

      for n in range(1, int(NTypes)):
          cog.outl("                   etl::is_base_of<T, T%s>::value ||" % n)
      cog.outl("                   etl::is_base_of<T, T%s>::value), \"Invalid type\");" % int(NTypes))

      ]]]*/
      /*[[[end]]]*/

      base_t::destroy(p);
    }

    //*************************************************************************
    /// Returns the maximum number of items in the variant_pool.
    //*************************************************************************
    size_t max_size() const 
    { 
      return base_t::max_size(); 
    }

  private:

    variant_pool_ext(const variant_pool_ext&) ETL_DELETE;
    variant_pool_ext& operator =(const variant_pool_ext&) ETL_DELETE;
  };
}

#endif
