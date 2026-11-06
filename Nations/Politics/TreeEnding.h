#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Politics
{
    class TreeEnding : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit TreeEnding(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Politics", "TreeEnding") {}
    public:
        bool AppliesTo(void* w, void* r, void* b) const { void* args[] = { w, r, b }; return CallValue<bool>("AppliesTo", args, 3); }
        void* id() const { return ReadField<void*>("id"); }
        void SetId(void* value) const { WriteField<void*>("id", value); }
        void* label() const { return ReadField<void*>("label"); }
        void SetLabel(void* value) const { WriteField<void*>("label", value); }
        void* armedLabel() const { return ReadField<void*>("armedLabel"); }
        void SetArmedLabel(void* value) const { WriteField<void*>("armedLabel", value); }
        bool danger() const { return ReadField<bool>("danger"); }
        void SetDanger(bool value) const { WriteField<bool>("danger", value); }
        void* run() const { return ReadField<void*>("run"); }
        void SetRun(void* value) const { WriteField<void*>("run", value); }
        void* cancel() const { return ReadField<void*>("cancel"); }
        void SetCancel(void* value) const { WriteField<void*>("cancel", value); }
        void* cancelLabel() const { return ReadField<void*>("cancelLabel"); }
        void SetCancelLabel(void* value) const { WriteField<void*>("cancelLabel", value); }
        bool offersToPlayer() const { return ReadField<bool>("offersToPlayer"); }
        void SetOffersToPlayer(bool value) const { WriteField<bool>("offersToPlayer", value); }
        void* accepted() const { return ReadField<void*>("accepted"); }
        void SetAccepted(void* value) const { WriteField<void*>("accepted", value); }
        void* done() const { return ReadField<void*>("done"); }
        void SetDone(void* value) const { WriteField<void*>("done", value); }
    };
}
