#ifndef REMAP_HPP
#define REMAP_HPP

#include "base.hpp"
#include "bridge.hpp"
#include "KeyCode.hpp"
#include "CallBackWrapper.hpp"

namespace org_pqrs_KeyRemap4MacBook {
  // ----------------------------------------------------------------------
  struct RemapParams {
    RemapParams(const Params_KeyboardEventCallBack& p) :
      params(p), isremapped(false) {}
//    RemapParams(const Params_KeyboardEventCallBack& p, KeyRemap4MacBook_bridge::GetWorkspaceData::Reply& w2) :
//      params(p), isremapped(false), wsd_public(w2) {}
																				//10.2.10,2011.01.09 Haci NG

    const Params_KeyboardEventCallBack& params;
    bool isremapped;
//	KeyRemap4MacBook_bridge::GetWorkspaceData::Reply& wsd_public;				// 10.2.10,2011.01.09 Haci NG
  };

  // --------------------
  struct RemapConsumerParams {
    RemapConsumerParams(const Params_KeyboardSpecialEventCallback& p) :
      params(p), isremapped(false) {}

    const Params_KeyboardSpecialEventCallback& params;
    bool isremapped;
  };

  // --------------------
  struct RemapPointingParams_relative {
    RemapPointingParams_relative(const Params_RelativePointerEventCallback& p) :
      params(p), isremapped(false) {}

    const Params_RelativePointerEventCallback& params;
    bool isremapped;
  };
}

#endif
