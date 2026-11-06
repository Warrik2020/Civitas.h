#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::UI
{
    class RecruitmentPanel : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit RecruitmentPanel(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.UI", "RecruitmentPanel") {}
    public:
        void Toggle() const { Call("Toggle", nullptr, 0); }
        bool TrySetDeployState(int stateId) const { void* __callArgs[] = { &stateId }; return CallStaticValue<bool>("TrySetDeployState", __callArgs, 1); }
        void FollowCurrent(int type) const { void* __callArgs[] = { &type }; CallStatic("FollowCurrent", __callArgs, 1); }
        void SetVisible(bool visible) const { void* __callArgs[] = { &visible }; Call("SetVisible", __callArgs, 1); }
        bool Prebuild() const { return CallValue<bool>("Prebuild", nullptr, 0); }
    };
}
