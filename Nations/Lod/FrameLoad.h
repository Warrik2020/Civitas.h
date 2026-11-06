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
        void Bind(void* predict) const { void* __callArgs[] = { predict }; CallStatic("Bind", __callArgs, 1); }
        void Unbind(void* predict) const { void* __callArgs[] = { predict }; CallStatic("Unbind", __callArgs, 1); }
        void NoteAdvance() const { CallStatic("NoteAdvance", nullptr, 0); }
        void NoteTick() const { CallStatic("NoteTick", nullptr, 0); }
        bool Defer(int& deferredAt) const { void* __callArgs[] = { &deferredAt }; return CallStaticValue<bool>("Defer", __callArgs, 1); }
    };
}
