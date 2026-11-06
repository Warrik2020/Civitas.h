#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::Scenario
{
    class SerAffairs : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit SerAffairs(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Scenario", "SerAffairs") {}
    public:
        int format() const { return ReadField<int>("format"); }
        void SetFormat(int value) const { WriteField<int>("format", value); }
        int mode() const { return ReadField<int>("mode"); }
        void SetMode(int value) const { WriteField<int>("mode", value); }
        int originTick() const { return ReadField<int>("originTick"); }
        void SetOriginTick(int value) const { WriteField<int>("originTick", value); }
        bool hasOrigin() const { return ReadField<bool>("hasOrigin"); }
        void SetHasOrigin(bool value) const { WriteField<bool>("hasOrigin", value); }
        int nextThread() const { return ReadField<int>("nextThread"); }
        void SetNextThread(int value) const { WriteField<int>("nextThread", value); }
        int nextFigure() const { return ReadField<int>("nextFigure"); }
        void SetNextFigure(int value) const { WriteField<int>("nextFigure", value); }
        int nextMark() const { return ReadField<int>("nextMark"); }
        void SetNextMark(int value) const { WriteField<int>("nextMark", value); }
        int nextChoice() const { return ReadField<int>("nextChoice"); }
        void SetNextChoice(int value) const { WriteField<int>("nextChoice", value); }
        void* threads() const { return ReadField<void*>("threads"); }
        void SetThreads(void* value) const { WriteField<void*>("threads", value); }
        void* figures() const { return ReadField<void*>("figures"); }
        void SetFigures(void* value) const { WriteField<void*>("figures", value); }
        void* marks() const { return ReadField<void*>("marks"); }
        void SetMarks(void* value) const { WriteField<void*>("marks", value); }
        void* choices() const { return ReadField<void*>("choices"); }
        void SetChoices(void* value) const { WriteField<void*>("choices", value); }
        void* books() const { return ReadField<void*>("books"); }
        void SetBooks(void* value) const { WriteField<void*>("books", value); }
        bool peopleKeysInFileSpace() const { return ReadField<bool>("peopleKeysInFileSpace"); }
        void SetPeopleKeysInFileSpace(bool value) const { WriteField<bool>("peopleKeysInFileSpace", value); }
    };
}
