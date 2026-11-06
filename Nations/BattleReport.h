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
        void SetPlayerNationId(int value) const { WriteField<int>("playerNationId", value); }
        int enemyNationId() const { return ReadField<int>("enemyNationId"); }
        void SetEnemyNationId(int value) const { WriteField<int>("enemyNationId", value); }
        int tileIndex() const { return ReadField<int>("tileIndex"); }
        void SetTileIndex(int value) const { WriteField<int>("tileIndex", value); }
        int outcome() const { return ReadField<int>("outcome"); }
        void SetOutcome(int value) const { WriteField<int>("outcome", value); }
        int lossesPlayerSide() const { return ReadField<int>("lossesPlayerSide"); }
        void SetLossesPlayerSide(int value) const { WriteField<int>("lossesPlayerSide", value); }
        int lossesEnemySide() const { return ReadField<int>("lossesEnemySide"); }
        void SetLossesEnemySide(int value) const { WriteField<int>("lossesEnemySide", value); }
        int startPlayerSide() const { return ReadField<int>("startPlayerSide"); }
        void SetStartPlayerSide(int value) const { WriteField<int>("startPlayerSide", value); }
        int startEnemySide() const { return ReadField<int>("startEnemySide"); }
        void SetStartEnemySide(int value) const { WriteField<int>("startEnemySide", value); }
        int divisionsRoutedPlayerSide() const { return ReadField<int>("divisionsRoutedPlayerSide"); }
        void SetDivisionsRoutedPlayerSide(int value) const { WriteField<int>("divisionsRoutedPlayerSide", value); }
        int divisionsRoutedEnemySide() const { return ReadField<int>("divisionsRoutedEnemySide"); }
        void SetDivisionsRoutedEnemySide(int value) const { WriteField<int>("divisionsRoutedEnemySide", value); }
        float battleSeconds() const { return ReadField<float>("battleSeconds"); }
        void SetBattleSeconds(float value) const { WriteField<float>("battleSeconds", value); }
        int gameDays() const { return ReadField<int>("gameDays"); }
        void SetGameDays(int value) const { WriteField<int>("gameDays", value); }
        void* placeName() const { return ReadField<void*>("placeName"); }
        void SetPlaceName(void* value) const { WriteField<void*>("placeName", value); }
    };
}
