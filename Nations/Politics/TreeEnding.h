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
        bool AppliesTo(void* w, void* r, void* b) const { void* __callArgs[] = { w, r, b }; return CallValue<bool>("AppliesTo", __callArgs, 3); }
        void* id() const { return ReadField<void*>("id"); }
        void id(void* value) const { WriteField<void*>("id", value); }
        void* label() const { return ReadField<void*>("label"); }
        void label(void* value) const { WriteField<void*>("label", value); }
        void* armedLabel() const { return ReadField<void*>("armedLabel"); }
        void armedLabel(void* value) const { WriteField<void*>("armedLabel", value); }
        bool danger() const { return ReadField<bool>("danger"); }
        void danger(bool value) const { WriteField<bool>("danger", value); }
        void* run() const { return ReadField<void*>("run"); }
        void run(void* value) const { WriteField<void*>("run", value); }
        void* cancel() const { return ReadField<void*>("cancel"); }
        void cancel(void* value) const { WriteField<void*>("cancel", value); }
        void* cancelLabel() const { return ReadField<void*>("cancelLabel"); }
        void cancelLabel(void* value) const { WriteField<void*>("cancelLabel", value); }
        bool offersToPlayer() const { return ReadField<bool>("offersToPlayer"); }
        void offersToPlayer(bool value) const { WriteField<bool>("offersToPlayer", value); }
        void* accepted() const { return ReadField<void*>("accepted"); }
        void accepted(void* value) const { WriteField<void*>("accepted", value); }
        void* done() const { return ReadField<void*>("done"); }
        void done(void* value) const { WriteField<void*>("done", value); }
    };
}
