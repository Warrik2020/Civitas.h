#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::Nations
{
    class FlagChoice : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit FlagChoice(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations", "FlagChoice") {}
    public:
        void* Pack(const char* key, const char* label = nullptr) const { void* managed_0 = Api() && Api()->NewString ? Api()->NewString(key ? key : "") : nullptr; void* managed_1 = Api() && Api()->NewString ? Api()->NewString(label ? label : "") : nullptr; void* __callArgs[] = { managed_0, managed_1 }; return CallStatic("Pack", __callArgs, 2); }
        void* Picture(void* px, int w, int h, const char* label, int libraryIndex = -1) const { void* managed_3 = Api() && Api()->NewString ? Api()->NewString(label ? label : "") : nullptr; void* __callArgs[] = { px, &w, &h, managed_3, &libraryIndex }; return CallStatic("Picture", __callArgs, 5); }
        void* CopyOf(void* n) const { void* __callArgs[] = { n }; return CallStatic("CopyOf", __callArgs, 1); }
        void* RandomPack(void* nations = nullptr) const { void* __callArgs[] = { nations }; return CallStatic("RandomPack", __callArgs, 1); }
        bool SameAs(void* other) const { void* __callArgs[] = { other }; return CallValue<bool>("SameAs", __callArgs, 1); }
        void* Preview() const { return Call("Preview", nullptr, 0); }
        void Release() const { Call("Release", nullptr, 0); }
        void ApplyTo(void* n) const { void* __callArgs[] = { n }; Call("ApplyTo", __callArgs, 1); }
        void* packKey() const { return ReadField<void*>("packKey"); }
        void* pixels() const { return ReadField<void*>("pixels"); }
        int width() const { return ReadField<int>("width"); }
        int height() const { return ReadField<int>("height"); }
        void* label() const { return ReadField<void*>("label"); }
        int libraryIndex() const { return ReadField<int>("libraryIndex"); }
    };
}
