#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Lod
{
    class FrameLoad : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit FrameLoad(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Lod", "FrameLoad") {}
    public:
        void Bind(void* predict) const { void* args[] = { predict }; CallStatic("Bind", args, 1); }
        void Unbind(void* predict) const { void* args[] = { predict }; CallStatic("Unbind", args, 1); }
        void NoteAdvance() const { CallStatic("NoteAdvance", nullptr, 0); }
        void NoteTick() const { CallStatic("NoteTick", nullptr, 0); }
        bool Defer(int& deferredAt) const { void* args[] = { &deferredAt }; return CallStaticValue<bool>("Defer", args, 1); }
    };
}
