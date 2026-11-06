#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::TimeSkip
{
    class TimeSkipRecord : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit TimeSkipRecord(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.TimeSkip", "TimeSkipRecord") {}
    public:
        void Start(void* w) const { void* __callArgs[] = { w }; Call("Start", __callArgs, 1); }
        void Sample(void* w) const { void* __callArgs[] = { w }; Call("Sample", __callArgs, 1); }
        void* Of(void* r, int playerId) const { void* __callArgs[] = { r, &playerId }; return CallStatic("Of", __callArgs, 2); }
        void* Capture(void* w) const { void* __callArgs[] = { w }; return CallStatic("Capture", __callArgs, 1); }
        void AddEvent(void* e) const { void* __callArgs[] = { e }; Call("AddEvent", __callArgs, 1); }
        void AddDefault(int tick, const char* text) const { void* managed_1 = Api() && Api()->NewString ? Api()->NewString(text ? text : "") : nullptr; void* __callArgs[] = { &tick, managed_1 }; Call("AddDefault", __callArgs, 2); }
        int startTick() const { return ReadField<int>("startTick"); }
        void startTick(int value) const { WriteField<int>("startTick", value); }
        int playerId() const { return ReadField<int>("playerId"); }
        void playerId(int value) const { WriteField<int>("playerId", value); }
        void* before() const { return ReadField<void*>("before"); }
        void before(void* value) const { WriteField<void*>("before", value); }
        void* samples() const { return ReadField<void*>("samples"); }
        void* tilesAtStart() const { return ReadField<void*>("tilesAtStart"); }
        void tilesAtStart(void* value) const { WriteField<void*>("tilesAtStart", value); }
        void* playerEvents() const { return ReadField<void*>("playerEvents"); }
        void* worldEvents() const { return ReadField<void*>("worldEvents"); }
        void* defaults() const { return ReadField<void*>("defaults"); }
        void* founded() const { return ReadField<void*>("founded"); }
        void* eliminated() const { return ReadField<void*>("eliminated"); }
        int warsStarted() const { return ReadField<int>("warsStarted"); }
        void warsStarted(int value) const { WriteField<int>("warsStarted", value); }
        int warsEnded() const { return ReadField<int>("warsEnded"); }
        void warsEnded(int value) const { WriteField<int>("warsEnded", value); }
        int divisionsRaised() const { return ReadField<int>("divisionsRaised"); }
        void divisionsRaised(int value) const { WriteField<int>("divisionsRaised", value); }
        int divisionsLost() const { return ReadField<int>("divisionsLost"); }
        void divisionsLost(int value) const { WriteField<int>("divisionsLost", value); }
    };
}
