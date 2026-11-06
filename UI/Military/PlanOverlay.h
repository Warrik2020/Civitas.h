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
        void SetPreview(void* foes, void* color) const { void* args[] = { foes, color }; CallStatic("SetPreview", args, 2); }
        void SetPreview(void* foes, void* color, void* only, int onlyStamp) const { void* args[] = { foes, color, only, &onlyStamp }; CallStatic("SetPreview", args, 4); }
        void ClearPreview() const { CallStatic("ClearPreview", nullptr, 0); }
        void Clear() const { Call("Clear", nullptr, 0); }
        void Upload(void* m) const { void* args[] = { m }; Call("Upload", args, 1); }
        void* v() const { return ReadField<void*>("v"); }
        void* c() const { return ReadField<void*>("c"); }
        void* t() const { return ReadField<void*>("t"); }
    };
}
