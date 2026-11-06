#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Internals
{
    class AffairsContext : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit AffairsContext(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Internals", "AffairsContext") {}
    public:
        void* Entry(const char* role) const { void* managed_0 = Api() && Api()->NewString ? Api()->NewString(role ? role : "") : nullptr; void* __callArgs[] = { managed_0 }; return Call("Entry", __callArgs, 1); }
        int Id(const char* role) const { void* managed_0 = Api() && Api()->NewString ? Api()->NewString(role ? role : "") : nullptr; void* __callArgs[] = { managed_0 }; return CallValue<int>("Id", __callArgs, 1); }
        void* Figure(const char* role) const { void* managed_0 = Api() && Api()->NewString ? Api()->NewString(role ? role : "") : nullptr; void* __callArgs[] = { managed_0 }; return Call("Figure", __callArgs, 1); }
        bool NationAlive(const char* role) const { void* managed_0 = Api() && Api()->NewString ? Api()->NewString(role ? role : "") : nullptr; void* __callArgs[] = { managed_0 }; return CallValue<bool>("NationAlive", __callArgs, 1); }
        void* Subject(const char* role) const { void* managed_0 = Api() && Api()->NewString ? Api()->NewString(role ? role : "") : nullptr; void* __callArgs[] = { managed_0 }; return Call("Subject", __callArgs, 1); }
        float Roll(int salt) const { void* __callArgs[] = { &salt }; return CallValue<float>("Roll", __callArgs, 1); }
        int Pick(void* list, int salt) const { void* __callArgs[] = { list, &salt }; return CallValue<int>("Pick", __callArgs, 2); }
        float Years(int ticks) const { void* __callArgs[] = { &ticks }; return CallValue<float>("Years", __callArgs, 1); }
        float MonthlyIncome() const { return CallValue<float>("MonthlyIncome", nullptr, 0); }
        void* w() const { return ReadField<void*>("w"); }
        void w(void* value) const { WriteField<void*>("w", value); }
        void* core() const { return ReadField<void*>("core"); }
        void core(void* value) const { WriteField<void*>("core", value); }
        int nation() const { return ReadField<int>("nation"); }
        void nation(int value) const { WriteField<int>("nation", value); }
        void* thread() const { return ReadField<void*>("thread"); }
        void thread(void* value) const { WriteField<void*>("thread", value); }
        void* story() const { return ReadField<void*>("story"); }
        void story(void* value) const { WriteField<void*>("story", value); }
        bool commit() const { return ReadField<bool>("commit"); }
        void commit(bool value) const { WriteField<bool>("commit", value); }
        int parentNation() const { return ReadField<int>("parentNation"); }
        void parentNation(int value) const { WriteField<int>("parentNation", value); }
        uint32_t storyHash() const { return ReadField<uint32_t>("storyHash"); }
        void storyHash(uint32_t value) const { WriteField<uint32_t>("storyHash", value); }
    };
}
