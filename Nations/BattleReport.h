#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::Nations
{
    class BattleReport : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit BattleReport(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations", "BattleReport") {}
    public:
        int playerNationId() const { return ReadField<int>("playerNationId"); }
        void playerNationId(int value) const { WriteField<int>("playerNationId", value); }
        int enemyNationId() const { return ReadField<int>("enemyNationId"); }
        void enemyNationId(int value) const { WriteField<int>("enemyNationId", value); }
        int tileIndex() const { return ReadField<int>("tileIndex"); }
        void tileIndex(int value) const { WriteField<int>("tileIndex", value); }
        int outcome() const { return ReadField<int>("outcome"); }
        void outcome(int value) const { WriteField<int>("outcome", value); }
        int lossesPlayerSide() const { return ReadField<int>("lossesPlayerSide"); }
        void lossesPlayerSide(int value) const { WriteField<int>("lossesPlayerSide", value); }
        int lossesEnemySide() const { return ReadField<int>("lossesEnemySide"); }
        void lossesEnemySide(int value) const { WriteField<int>("lossesEnemySide", value); }
        int startPlayerSide() const { return ReadField<int>("startPlayerSide"); }
        void startPlayerSide(int value) const { WriteField<int>("startPlayerSide", value); }
        int startEnemySide() const { return ReadField<int>("startEnemySide"); }
        void startEnemySide(int value) const { WriteField<int>("startEnemySide", value); }
        int divisionsRoutedPlayerSide() const { return ReadField<int>("divisionsRoutedPlayerSide"); }
        void divisionsRoutedPlayerSide(int value) const { WriteField<int>("divisionsRoutedPlayerSide", value); }
        int divisionsRoutedEnemySide() const { return ReadField<int>("divisionsRoutedEnemySide"); }
        void divisionsRoutedEnemySide(int value) const { WriteField<int>("divisionsRoutedEnemySide", value); }
        float battleSeconds() const { return ReadField<float>("battleSeconds"); }
        void battleSeconds(float value) const { WriteField<float>("battleSeconds", value); }
        int gameDays() const { return ReadField<int>("gameDays"); }
        void gameDays(int value) const { WriteField<int>("gameDays", value); }
        void* placeName() const { return ReadField<void*>("placeName"); }
        void placeName(void* value) const { WriteField<void*>("placeName", value); }
    };
}
