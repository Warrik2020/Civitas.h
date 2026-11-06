#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Internals
{
    class AffairsStoryDef : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit AffairsStoryDef(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Internals", "AffairsStoryDef") {}
    public:
        void* Step(const char* id) const { void* managed_0 = Api() && Api()->NewString ? Api()->NewString(id ? id : "") : nullptr; void* __callArgs[] = { managed_0 }; return Call("Step", __callArgs, 1); }
        void* CastDef(const char* name) const { void* managed_0 = Api() && Api()->NewString ? Api()->NewString(name ? name : "") : nullptr; void* __callArgs[] = { managed_0 }; return Call("CastDef", __callArgs, 1); }
        void* id() const { return ReadField<void*>("id"); }
        void id(void* value) const { WriteField<void*>("id", value); }
        void* file() const { return ReadField<void*>("file"); }
        void file(void* value) const { WriteField<void*>("file", value); }
        int line() const { return ReadField<int>("line"); }
        void line(int value) const { WriteField<int>("line", value); }
        int theme() const { return ReadField<int>("theme"); }
        void theme(int value) const { WriteField<int>("theme", value); }
        bool themeSet() const { return ReadField<bool>("themeSet"); }
        void themeSet(bool value) const { WriteField<bool>("themeSet", value); }
        void* start() const { return ReadField<void*>("start"); }
        void start(void* value) const { WriteField<void*>("start", value); }
        float cooldownYears() const { return ReadField<float>("cooldownYears"); }
        void cooldownYears(float value) const { WriteField<float>("cooldownYears", value); }
        bool spawnOnly() const { return ReadField<bool>("spawnOnly"); }
        void spawnOnly(bool value) const { WriteField<bool>("spawnOnly", value); }
        bool multi() const { return ReadField<bool>("multi"); }
        void multi(bool value) const { WriteField<bool>("multi", value); }
        void* seeds() const { return ReadField<void*>("seeds"); }
        void* requires_() const { return ReadField<void*>("requires"); }
        void* cast() const { return ReadField<void*>("cast"); }
        void* stepList() const { return ReadField<void*>("stepList"); }
    };
}
