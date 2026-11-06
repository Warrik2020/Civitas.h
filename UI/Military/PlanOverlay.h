#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::UI::Military
{
    class PlanOverlay : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit PlanOverlay(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.UI.Military", "PlanOverlay") {}
    public:
        void SetPreview(void* foes, void* color) const { void* __callArgs[] = { foes, color }; CallStatic("SetPreview", __callArgs, 2); }
        void SetPreview(void* foes, void* color, void* only, int onlyStamp) const { void* __callArgs[] = { foes, color, only, &onlyStamp }; CallStatic("SetPreview", __callArgs, 4); }
        void ClearPreview() const { CallStatic("ClearPreview", nullptr, 0); }
    };
}
