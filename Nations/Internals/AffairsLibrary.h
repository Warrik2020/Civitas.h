#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Internals
{
    class AffairsLibrary : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit AffairsLibrary(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Internals", "AffairsLibrary") {}
    public:
        void* Event(const char* id) const { void* managed_0 = Api() && Api()->NewString ? Api()->NewString(id ? id : "") : nullptr; void* args[] = { managed_0 }; return Call("Event", args, 1); }
        void* Phrases(const char* id) const { void* managed_0 = Api() && Api()->NewString ? Api()->NewString(id ? id : "") : nullptr; void* args[] = { managed_0 }; return Call("Phrases", args, 1); }
        void* Story(const char* id) const { void* managed_0 = Api() && Api()->NewString ? Api()->NewString(id ? id : "") : nullptr; void* args[] = { managed_0 }; return Call("Story", args, 1); }
        void* Mark(const char* id) const { void* managed_0 = Api() && Api()->NewString ? Api()->NewString(id ? id : "") : nullptr; void* args[] = { managed_0 }; return Call("Mark", args, 1); }
        void* LoadDirectory(const char* dir) const { void* managed_0 = Api() && Api()->NewString ? Api()->NewString(dir ? dir : "") : nullptr; void* args[] = { managed_0 }; return CallStatic("LoadDirectory", args, 1); }
        void Parse(const char* text, const char* file) const { void* managed_0 = Api() && Api()->NewString ? Api()->NewString(text ? text : "") : nullptr; void* managed_1 = Api() && Api()->NewString ? Api()->NewString(file ? file : "") : nullptr; void* args[] = { managed_0, managed_1 }; Call("Parse", args, 2); }
        void* ParseCond(const char* text, const char* file, int line) const { void* managed_0 = Api() && Api()->NewString ? Api()->NewString(text ? text : "") : nullptr; void* managed_1 = Api() && Api()->NewString ? Api()->NewString(file ? file : "") : nullptr; void* args[] = { managed_0, managed_1, &line }; return Call("ParseCond", args, 3); }
        bool TryNum(const char* s, float& v) const { void* managed_0 = Api() && Api()->NewString ? Api()->NewString(s ? s : "") : nullptr; void* args[] = { managed_0, &v }; return CallStaticValue<bool>("TryNum", args, 2); }
        bool TryTheme(const char* s, int& theme) const { void* managed_0 = Api() && Api()->NewString ? Api()->NewString(s ? s : "") : nullptr; void* args[] = { managed_0, &theme }; return CallStaticValue<bool>("TryTheme", args, 2); }
        bool TryDuration(const char* s, float& lo, float& hi) const { void* managed_0 = Api() && Api()->NewString ? Api()->NewString(s ? s : "") : nullptr; void* args[] = { managed_0, &lo, &hi }; return CallStaticValue<bool>("TryDuration", args, 3); }
        void Validate() const { Call("Validate", nullptr, 0); }
        void* Stories() const { return ReadField<void*>("Stories"); }
        void* Issues() const { return ReadField<void*>("Issues"); }
        void* ctx() const { return ReadField<void*>("ctx"); }
        void SetCtx(void* value) const { WriteField<void*>("ctx", value); }
        int indent() const { return ReadField<int>("indent"); }
        void SetIndent(int value) const { WriteField<int>("indent", value); }
    };
}
